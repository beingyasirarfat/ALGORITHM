#include <iostream>
#include<stdio.h>
#include<string.h>
#include <cstdarg>
using std::cout;
void Println(const char *c, ...)
{
        va_list next;
        va_start(next, c);
        size_t size = strlen(c);
        size_t i=0;
        for (i; i < size - 1; i++)
        {
                if (c[i] == '%')
                {
                        switch (c[i + 1])
                        {
                        case 'd':
                                cout << va_arg(next, int);
                                break;
                        case 'f':
                                cout <<std::fixed<< (float)va_arg(next, double);
                                break;
                        case 'l':
                                if (i < size -2 )
                                {
                                        if (c[i + 2] == 'f')
                                        {
                                                cout <<std::fixed << va_arg(next, double);
                                                i++;
                                                break;
                                        }
                                        else if (c[i + 2] == 'l')
                                        {
                                                cout << va_arg(next, long long int);
                                                i++;
                                                break;
                                        }else {
                                                cout << va_arg(next, long int);
                                                break;
                                        }
                                }else{
                                        cout << va_arg(next, long int);
                                        break;
                                }
                        case 's':
                                cout<< va_arg(next, const char*);
                                break;
                        default:
                                cout<<"%";
                                break;
                        }
                        i++;
                }else
                {
                        cout<<c[i];
                }
                
        }
        while(i<size) cout<<c[i++];
        cout<<std::endl;
        va_end(next);
}

int main(){
        int i=10;
        float f = 13.234;
        double d = 198.94857483;
        long int l = 293847523;
        long long int ll = 98273452903745;
        char s[] = "Yasir Arfat";
        Println("Hello world");
        Println("%d + %d = %d", 2, 2, 2+2);
        Println("example of float is = %f",f);
        Println("example of double is = %lf",d);
        Println("example of long is = %l",l);
        Println("example of long long is = %ll",ll);
        Println("This is a string => \"%s\"",s);
}