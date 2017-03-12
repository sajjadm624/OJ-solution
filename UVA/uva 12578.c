#include<stdio.h>
#include<math.h>
#define PI 2 * acos(0.0)
int main()
{
    double len,wide,rad,r_area,g_area, total_area;
    int test,i;
    scanf("%d", &test);

    for(i=1 ; i<=test ; i++)

    {
        scanf("%lf", &len);
        wide = 0.6 * len;
        rad = 0.2 * len;
        total_area = len * wide;
        r_area = ( PI * rad * rad );
        g_area = total_area - r_area;
        printf("%.2lf %.2lf\n", r_area, g_area);
    }
    return 0;
}
