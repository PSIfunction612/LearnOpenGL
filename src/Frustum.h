//
// Created by psifunction on 03.12.2020.
//

#ifndef LEARNOPENGL_FRUSTUM_H
#define LEARNOPENGL_FRUSTUM_H


#include <glm/glm.hpp>

auto projection_create(int n, int f, int r, int t){
    glm::mat4 projection(0.f);
    projection[0] = glm::vec4(((float)n)/(float)r, 0,0,0);
    projection[1] = glm::vec4(0, ((float)n)/(float)t,0,0);
    projection[2] = glm::vec4(0, 0,((float)(n+f))/(float)(n-f), -1);
    projection[3] = glm::vec4(0, 0,((float)(2*n*f))/(float)(n-f),0);
    return projection;
}


#endif //LEARNOPENGL_FRUSTUM_H
