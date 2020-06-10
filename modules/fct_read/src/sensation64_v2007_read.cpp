#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <math.h>

#include "../include/sensation64_v2007_read.h"

struct  sensation64_frame read_CTDv2007_frame(FILE* fp, int frame_index,int num_channels,int num_slices,int frame_flag,size_t offset);

// CTD files
void ReadCTDv2007Frame(FILE* fp, int frame_index, int num_channels, int num_slices, float *f){
    printf("Siemens CTD file types are not supported in this version of FreeCT Reader. Sorry!\n");
    exit(1); // Linux error for "operation not permitted"
}
float ReadCTDv2007TubeAngle(FILE* fp, int frame_index,int num_channels,int num_slices){
    printf("Siemens CTD file types are not supported in this version of FreeCT Reader. Sorry!\n");
    exit(1); // Linux error for "operation not permitted"
}
long ReadCTDv2007TablePosition(FILE* fp, int frame_index,int num_channels,int num_slices){    
    printf("Siemens CTD file types are not supported in this version of FreeCT Reader. Sorry!\n");
    exit(1); // Linux error for "operation not permitted"
}

struct sensation64_frame read_CTDv2007_frame(FILE* fp, int frame_index,int num_channels,int num_slices,int frame_flag,size_t offset){
    printf("Siemens CTD file types are not supported in this version of FreeCT Reader. Sorry!\n");
    exit(1); // Linux error for "operation not permitted"
}
