#version 330 core

layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aCol;
layout (location = 2) in vec2 aTexCoord;

out vec3 outColor;
out vec2 TexCoord;

uniform float offset_x;
uniform float offset_y;
uniform mat4 transform;
void main() {
    gl_Position = transform * vec4(aPos.x + offset_x, aPos.y + offset_y, aPos.z, 1.0);
    outColor = aCol;
    TexCoord = aTexCoord;
}
