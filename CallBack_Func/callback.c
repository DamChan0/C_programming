#include <stdio.h>

// callback function type

typedef void (*user_print)(void);

// setter for a callback function
void setPrintCallback(user_print);

// user-defined function
void userFunc(void);

// use a callback function
void useCallback(void);

// global variable for a callback function
user_print userCallbackFunc = NULL;

int main(void)
{
    // Before setting the callback function
    printf("Before setting the callback function\n");
    useCallback();

    // Setting the callback function
    setPrintCallback(userFunc);

    // After setting the callback function
    printf("After setting the callback function\n");
    useCallback();

    return 0;
}

// setter for callback function
void setPrintCallback(user_print fp)
{
    userCallbackFunc = fp;
}

// user function
void userFunc(void)
{
    printf("I'm a callback function\n\n");
}

// use callback function
void useCallback(void)
{
    if (userCallbackFunc) // check if a callback function has registered
    {
        userCallbackFunc();
    }
    else
    {
        printf("no callback function\n\n");
    }
}