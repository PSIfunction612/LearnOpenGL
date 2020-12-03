//
// Created by psifunction on 01.12.2020.
//

#ifndef LEARNOPENGL_QUARTERNION_H
#define LEARNOPENGL_QUARTERNION_H

#include "vec3.h"

namespace psi {
    class quarternion {
    public:
        quarternion(float a, float b, float c, float d);
        quarternion(float a, const vec3& v);

        explicit quarternion(const vec3& v);

        quarternion ex() const;

        float r = 0.f;
        vec3 vec = {0.f, 0.f, 0.f};
    };

    quarternion operator*(const quarternion& a, const quarternion& b);
    quarternion operator+(const quarternion& a, const quarternion& b);

    vec3 rotate(const vec3& v, const quarternion& rotor);
}

#endif //LEARNOPENGL_QUARTERNION_H
