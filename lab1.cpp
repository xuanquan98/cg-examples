#include <GL/glut.h>

/**
 * gl : các lệnh liên quan đến vẽ
 * glut : các lệnh liên quan đến cửa sổ, màn hình ..
 * */

void displayMe(void)
{
    // Lệnh xóa nền
    glClear(GL_COLOR_BUFFER_BIT);


    // Bắt đầu vẽ đa giác
    glBegin(GL_POLYGON);
        // Các đỉnh được liệt kê sẽ tự nối với nhau và đỉnh cuối sẽ nôi với đỉnh đầu 
        glVertex3f(0.5, 0.0, 0.5);
        glVertex3f(0.5, 0.0, 0.0);
        glVertex3f(0.0, 0.5, 0.0);
        glVertex3f(0.0, 0.0, 0.5);
    glEnd();
    // Loại bỏ các transforms
    glFlush();
    
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello world!");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
