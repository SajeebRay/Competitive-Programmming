#include "resource.h"
#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#define lli long long int

using namespace std;

lli x, y, z;

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);
void addMenu(HWND);
void addControls(HWND);
void addControlForSum(HWND);

/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("CodeBlocksWindowsApp");

int WINAPI WinMain  (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    //wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = (HICON)LoadImage(GetModuleHandle(NULL),
                                     MAKEINTRESOURCE(IDI_ICON),
                                     IMAGE_ICON, 16, 16, 0); // here load the software icon
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */ //Default is (HBRUSH) COLOR_WINDOW
    wincl.hbrBackground = GetSysColorBrush(COLOR_3DFACE);   // COLOR_WINDOW is default

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           _T("Sajeeb's first project."),       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */  // here SYSMENU window is like popup menu
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           900,                 /* The programs width */
           500,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return 0;
}

#define TEXT_BUTTON 1 // 1 is just a value.
#define TEXT_BOX 2 // 1 is just a value.
#define EXIT_ALL 3
#define NAME_CHANGE 4
#define SUM_BUTTON 5
#define SUBS_BUTTON 6
#define MUL_BUTTON 7
#define DIV_BUTTON 8

static HWND textBoxHwnd;
static HWND textBoxButtonHwnd;
static HWND MathBoxOne;
static HWND MathBoxTwo;
static HWND SumResult;
char num1[32], num2[32], result[32], out[200];

/*  This function is called by the Windows function DispatchMessage()  */
LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)                  /* handle the messages */
    {
        case WM_CREATE:{       /********* created by SAJEEB **********/  //WM_CREATE is declared in windows header

            /**    Now create menu bar.  **/
            addMenu(hwnd);
            /**    Now create controls.  **/
            addControls(hwnd);
            /** Cheers have a simple sum  **/
            addControlForSum(hwnd);

            break;
        }
        case WM_COMMAND: {    /******** created by SAJEEB *************/  // this is for maintain actions

            switch(wParam)
            {
            /*case EXIT_ALL:

                DestroyWindow(hwnd);

                break;


            case NAME_CHANGE:

                DestroyWindow(textBoxHwnd);
                DestroyWindow(textBoxButtonHwnd);

                break;*/


            case TEXT_BUTTON:       //Action of ID_BUTTON

                /*Length of the text box string*/
                int len = GetWindowTextLength(textBoxHwnd) + 1; //GetWindowTextLength read all text of selective window
                static char title[500];  // title is a character type static array
                GetWindowText(textBoxHwnd, title, len);  // GetWindowText get all the text of selective window
                SetWindowText(hwnd, title); // SetWindowText read the title and set name of selected window
                MessageBox(hwnd, title, "Program name will", MB_ICONINFORMATION);

                break;


            /*case SUM_BUTTON:

                GetWindowText(MathBoxOne, num1, 32);
                GetWindowText(MathBoxTwo, num2, 32);

                x = atoi(num1);
                y = atoi(num2);
                z = x+y;
                string str = to_string(z);
                for (int i = 0; i < str.length(); i++)
                    result[i] = str[i];
                strcpy(out, num1);
                strcat(out, " + ");
                strcat(out, num2);
                strcat(out, " = ");
                strcat(out, result);

                SetWindowText(SumResult, out);

                break;
            case SUBS_BUTTON:

                GetWindowText(MathBoxOne, num1, 32);
                GetWindowText(MathBoxTwo, num2, 32);

                x = atoi(num1);
                y = atoi(num2);
                z = x-y;
                string str = to_string(z);
                for (int i = 0; i < str.length(); i++)
                    result[i] = str[i];
                strcpy(out, num1);
                strcat(out, " - ");
                strcat(out, num2);
                strcat(out, " = ");
                strcat(out, result);

                SetWindowText(SumResult, out);

                break;
            case MUL_BUTTON:

                GetWindowText(MathBoxOne, num1, 32);
                GetWindowText(MathBoxTwo, num2, 32);

                x = atoi(num1);
                y = atoi(num2);
                z = x*y;
                string str = to_string(z);
                for (int i = 0; i < str.length(); i++)
                    result[i] = str[i];
                strcpy(out, num1);
                strcat(out, " x ");
                strcat(out, num2);
                strcat(out, " = ");
                strcat(out, result);

                SetWindowText(SumResult, out);

                break;*/
            case DIV_BUTTON:

                GetWindowText(MathBoxOne, num1, 32);
                GetWindowText(MathBoxTwo, num2, 32);

                x = atoi(num1);
                y = atoi(num2);
                z = x/y;
                string str = to_string(z);
                for (int i = 0; i < str.length(); i++)
                    result[i] = str[i];
                strcpy(out, num1);
                strcat(out, " / ");
                strcat(out, num2);
                strcat(out, " = ");
                strcat(out, result);

                SetWindowText(SumResult, out);

                break;


            }
            break;

        }
        case WM_DESTROY:
            PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}
void addMenu(HWND hwnd)
{

            HMENU hMenubar = CreateMenu();    // HMENU is handle manu. hMenubar is a class;
            HMENU hSubMenu = CreateMenu();    // CreateMenu function is declared in  windows header
            HMENU hFile = CreateMenu();
            HMENU hOptions = CreateMenu();
            HMENU hSubOptions = CreateMenu();

            AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hSubMenu, "File"); // MF_POPUP create menu. UINT_PTR need for create menu options
            AppendMenu(hSubMenu, MF_STRING, NULL, "New");  // MF_STRING create menu options
            AppendMenu(hSubMenu, MF_STRING, NULL, "Open");  // MF_STRING create menu options
            AppendMenu(hSubMenu, MF_STRING, NULL, "Save");  // MF_STRING create menu options
            AppendMenu(hSubMenu, MF_STRING, NULL, "Save");  // MF_STRING create menu options
            AppendMenu(hSubMenu, MF_STRING, NULL, "Save As");  // MF_STRING create menu options
            AppendMenu(hSubMenu, MF_STRING, EXIT_ALL, "Exit");  // MF_STRING create menu options

            AppendMenu(hMenubar, MF_POPUP, (UINT_PTR)hOptions, "Option");
            AppendMenu(hOptions, MF_STRING, NULL, "Option 1");
            AppendMenu(hOptions, MF_POPUP, (UINT_PTR)hSubOptions, "Option 2");  // Here create a sub menu option
            AppendMenu(hOptions, MF_STRING, NULL, "Option 3");

            AppendMenu(hSubOptions, MF_STRING, NULL, "Click 1");
            AppendMenu(hSubOptions, MF_STRING, NULL, "Click 2");
            AppendMenu(hSubOptions, MF_STRING, NULL, "Click 3");

            AppendMenu(hMenubar, MF_STRING, EXIT_ALL, "Exit");

            SetMenu(hwnd, hMenubar); // SetMenu is for create menu bar
}
void addControls(HWND hwnd)
{
    /** Let's create static text **/
            CreateWindow(TEXT("STATIC"), TEXT("Set a name for your program"),
                         WS_VISIBLE | WS_CHILD,
                         20,10, 200, 20, hwnd,
                         (HMENU) NULL, NULL, NULL );

            /**  Let's create a text box  **/
            textBoxHwnd = CreateWindow(TEXT("EDIT"), TEXT(""),   // error facing problem
                         WS_VISIBLE | WS_CHILD | WS_BORDER | ES_MULTILINE | ES_AUTOVSCROLL,     // " | " is for multi command
                         20, 40, 200, 40,               // ES is edit style, ES_AUTOVSCROLL is for vartically scrolls
                         hwnd, (HMENU) TEXT_BOX,NULL, NULL );

            /** Let's create a window for button  **/
            textBoxButtonHwnd = CreateWindow(TEXT("BUTTON"),  TEXT("Save changes"), // button.  first text is action name.
                         WS_VISIBLE | WS_CHILD,            // 2nd text is button name. and its child window
                         20, 90, 110, 20,            // First x,y is action position. and second 2 paramiters is width and height
                         hwnd, (HMENU) TEXT_BUTTON, NULL, NULL ); //ID_BUTTON is the action identifier

            CreateWindow(TEXT("BUTTON"), TEXT("Close"),
                         WS_VISIBLE | WS_CHILD,
                         150, 90, 40, 20,
                         hwnd, (HMENU) NAME_CHANGE, NULL, NULL);

}
void addControlForSum(HWND hwnd)
{
            /** Let's create static text **/
            CreateWindow(TEXT("STATIC"), TEXT("Input two integer for sum."),
                         WS_VISIBLE | WS_CHILD | SS_CENTER,  // SS_CENTER means text align center.
                         60,140, 300, 20, hwnd,
                         (HMENU) NULL, NULL, NULL );


    MathBoxOne = CreateWindow(TEXT("EDIT"), TEXT(""),
                              WS_VISIBLE | WS_CHILD | WS_BORDER | ES_MULTILINE | ES_AUTOVSCROLL,
                              40, 170, 420, 40, hwnd,
                              (HMENU) NULL, NULL, NULL);

    MathBoxTwo = CreateWindow(TEXT("EDIT"), TEXT(""),
                              WS_VISIBLE | WS_CHILD | WS_BORDER | ES_MULTILINE | ES_AUTOVSCROLL,
                              40, 220, 420, 40, hwnd,
                              (HMENU) NULL, NULL, NULL);

    CreateWindow(TEXT("BUTTON"), TEXT("Sum"),
                              WS_VISIBLE | WS_CHILD | SS_CENTER,
                              40, 270, 50, 20, hwnd,
                              (HMENU) SUM_BUTTON, NULL, NULL);
    CreateWindow(TEXT("BUTTON"), TEXT("Substraction"),
                              WS_VISIBLE | WS_CHILD | SS_CENTER,
                              100, 270, 125, 20, hwnd,
                              (HMENU) SUBS_BUTTON, NULL, NULL);
    CreateWindow(TEXT("BUTTON"), TEXT("Multiply"),
                              WS_VISIBLE | WS_CHILD | SS_CENTER,
                              235, 270, 120, 20, hwnd,
                              (HMENU) MUL_BUTTON, NULL, NULL);
    CreateWindow(TEXT("BUTTON"), TEXT("Divide"),
                              WS_VISIBLE | WS_CHILD | SS_CENTER,
                              365, 270, 95, 20, hwnd,
                              (HMENU) DIV_BUTTON, NULL, NULL);


    SumResult = CreateWindow(TEXT("EDIT"), TEXT(""),
                              WS_VISIBLE | WS_CHILD | ES_MULTILINE | ES_AUTOHSCROLL,
                              40, 300, 420, 20, hwnd,
                              (HMENU) NULL, NULL, NULL);
}

