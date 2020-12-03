//
// Created by psifunction on 01.12.2020.
//

#include "quarternion.h"

psi::quarternion::quarternion(float a, float b, float c, float d) : r(a), vec{b,c,d}{ }

psi::quarternion::quarternion(float a, const psi::vec3& v) : r(a), vec(v) { }

psi::quarternion::quarternion(const psi::vec3& v) : vec(v) { }

psi::quarternion psi::quarternion::ex() const {
    return {r, vec*(-1)};
}

psi::quarternion psi::operator*(const psi::quarternion &a, const psi::quarternion &b) {
    return {a.r*b.r - a.vec*b.vec, b.vec*a.r + a.vec*b.r + (a.vec^b.vec)};
}

psi::quarternion psi::operator+(const psi::quarternion &a, const psi::quarternion &b) {
    return { a.r + b.r, a.vec + b.vec};
}

psi::vec3 psi::rotate(const psi::vec3 &v, const psi::quarternion &rotor) {
    auto b = rotor*quarternion(0, v);
    auto f = rotor.ex();
    auto o = b * f;
    return o.vec;
}
