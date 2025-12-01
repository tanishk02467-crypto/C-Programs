#include <stdio.h>

int main() {
    
    enum Status { SUCCESS = 10, FAILURE, TIMEOUT };

  
    const char *statusNames[] = { "SUCCESS", "FAILURE", "TIMEOUT" };

    int statusValues[] = { SUCCESS, FAILURE, TIMEOUT };


    for (int i = 0; i < 3; i++) {
        printf("%s = %d\n", statusNames[i], statusValues[i]);
    }

}