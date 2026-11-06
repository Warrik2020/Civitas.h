#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class LineMesh : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineMesh(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "LineMesh") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        int Vert(void* p, void* uv, void* c) const { void* __callArgs[] = { p, uv, c }; return CallValue<int>("Vert", __callArgs, 3); }
        void Quad(int a, int b, int c, int d) const { void* __callArgs[] = { &a, &b, &c, &d }; Call("Quad", __callArgs, 4); }
        void Sprite(void* c, void* ax, void* ay, float u0, float v0, float u1, float v1, void* col) const { void* __callArgs[] = { c, ax, ay, &u0, &v0, &u1, &v1, col }; Call("Sprite", __callArgs, 8); }
        void Triangle(void* a, void* b, void* c, void* uv, void* col) const { void* __callArgs[] = { a, b, c, uv, col }; Call("Triangle", __callArgs, 5); }
        void Rect(void* c, void* ax, void* ay, void* uv, void* col) const { void* __callArgs[] = { c, ax, ay, uv, col }; Call("Rect", __callArgs, 5); }
        void* Pos() const { return ReadField<void*>("Pos"); }
        void* Uv() const { return ReadField<void*>("Uv"); }
        void* Col() const { return ReadField<void*>("Col"); }
        void* Tri() const { return ReadField<void*>("Tri"); }
    };
}
