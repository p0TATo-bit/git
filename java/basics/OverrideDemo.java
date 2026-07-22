/**
 * 方法重写 (Override) 示例
 *
 * 重写：子类重新定义父类已有的方法，方法名、参数列表、返回类型必须相同。
 * 规则：
 *   1. 方法名、参数列表必须完全一致
 *   2. 返回类型可以是被重写方法返回类型的子类（协变返回类型）
 *   3. 访问权限不能比父类更低（public > protected > default > private）
 *   4. 不能重写 final / static / private 方法
 *   5. 重写的方法上加 @Override 注解，编译器帮你检查是否写错
 *
 * 口诀：重写看右边，new 谁调谁
 */

// ============ 父类 ============
class Animal {
    public void sound() {
        System.out.println("动物发出叫声");
    }

    public void eat() {
        System.out.println("动物吃东西");
    }
}

// ============ 子类重写 ============
class Dog extends Animal {

    @Override
    public void sound() {        // 重写：狗汪汪叫
        System.out.println("🐶 汪汪汪！");
    }

    @Override
    public void eat() {          // 重写：狗吃骨头
        System.out.println("🐶 啃骨头");
    }

    // 子类自己的方法
    public void wagTail() {
        System.out.println("🐶 摇尾巴");
    }
}

class Cat extends Animal {

    @Override
    public void sound() {        // 重写：猫喵喵叫
        System.out.println("🐱 喵喵喵～");
    }

    @Override
    public void eat() {          // 重写：猫吃鱼
        System.out.println("🐱 吃小鱼干");
    }
}

// ============ 测试 ============
public class OverrideDemo {
    public static void main(String[] args) {

        // 多态：父类引用指向子类对象
        Animal a1 = new Dog();
        Animal a2 = new Cat();

        a1.sound();   // 🐶 汪汪汪！
        a1.eat();     // 🐶 啃骨头
        // a1.wagTail();  ❌ 编译错误！Animal 类型没有 wagTail()

        a2.sound();   // 🐱 喵喵喵～
        a2.eat();     // 🐱 吃小鱼干

        System.out.println("------");

        // 直接调用子类对象
        Dog dog = new Dog();
        dog.sound();
        dog.wagTail();  // ✅ Dog 类型可以调用自己的方法

        System.out.println("------");

        // 多态数组
        Animal[] animals = {new Dog(), new Cat(), new Dog()};
        for (Animal a : animals) {
            a.sound();  // 同一个方法，不同表现 → 多态
        }
    }
}
