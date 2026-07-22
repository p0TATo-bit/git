/**
 * 多态 (Polymorphism) 示例
 *
 * 多态：同一个方法调用，不同对象表现出不同行为。
 *
 * 三个条件缺一不可：
 *   1. 继承 / 实现（extends / implements）
 *   2. 重写（子类重写父类方法）
 *   3. 父类引用指向子类对象（向上转型）
 *
 * 口诀：
 *   编译看左边，运行看右边
 *   成员变量看左边，成员方法看右边
 */

// ============ 父类 ============
class Shape {
    String name = "Shape";

    public void draw() {
        System.out.println("画一个形状");
    }

    public double area() {
        return 0;
    }
}

// ============ 子类 ============
class Circle extends Shape {
    String name = "Circle";
    double radius;

    Circle(double r) { this.radius = r; }

    @Override
    public void draw() {
        System.out.println("⭕ 画一个圆，半径 = " + radius);
    }

    @Override
    public double area() {
        return Math.PI * radius * radius;
    }
}

class Rectangle extends Shape {
    String name = "Rectangle";
    double width, height;

    Rectangle(double w, double h) { this.width = w; this.height = h; }

    @Override
    public void draw() {
        System.out.println("🔲 画一个矩形 " + width + "×" + height);
    }

    @Override
    public double area() {
        return width * height;
    }
}

class Triangle extends Shape {
    double base, height;

    Triangle(double b, double h) { this.base = b; this.height = h; }

    @Override
    public void draw() {
        System.out.println("🔺 画一个三角形 底=" + base + " 高=" + height);
    }

    @Override
    public double area() {
        return 0.5 * base * height;
    }
}

// ============ 测试 ============
public class PolymorphismDemo {
    public static void main(String[] args) {

        // 【向上转型】父类引用 → 子类对象
        Shape s1 = new Circle(3);
        Shape s2 = new Rectangle(4, 5);
        Shape s3 = new Triangle(6, 4);

        // 【多态】同一个 draw()，不同表现
        s1.draw();    // ⭕ 画一个圆
        s2.draw();    // 🔲 画一个矩形
        s3.draw();    // 🔺 画一个三角形

        System.out.println("------");

        // 多态数组：统一处理不同子类
        Shape[] shapes = {new Circle(2), new Rectangle(3, 6), new Triangle(4, 5)};

        for (Shape s : shapes) {
            s.draw();
            System.out.println("  面积 = " + s.area());
        }

        System.out.println("------");

        // ⚠️ 成员变量看左边（编译时类型）
        Shape s = new Circle(5);
        System.out.println(s.name);  // "Shape" ← 父类的变量，不是 "Circle"！
        // 成员变量没有多态！

        // 【向下转型】父类 → 子类（需要强转）
        if (s instanceof Circle) {
            Circle c = (Circle) s;
            System.out.println("半径 = " + c.radius);  // ✅ 可以访问子类特有属性
        }
    }
}
