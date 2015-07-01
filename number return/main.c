//
//  main.c
//  number return
//
//  Created by Auston Salvana on 6/30/15.
//  Copyright (c) 2015 ASolo. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int midPoint(int min, int max){
    
    int theMid = (min + max)/2;
    
    return theMid;
}


int binarySearch(int key, int array[], int min, int max){
    
    int newMid = midPoint(min, max);
    
    
    if (array[newMid] < key)  {
        return binarySearch(key, array, newMid + 1, max);
    }
    else if (array[newMid] > key){
        return binarySearch(key, array, min, newMid - 1);
    }
    
    
    return newMid;
    
}



int main(int argc, const char * argv[]) {
    
    int array[1000] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    
    int index = binarySearch(9, array, 0, 19);
    
    printf("%d", index);
    
    return 0;
}
