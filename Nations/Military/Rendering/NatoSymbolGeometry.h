#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class NatoSymbolGeometry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NatoSymbolGeometry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "NatoSymbolGeometry") {}
    public:
        float Luminance(void* c) const { void* args[] = { c }; return CallStaticValue<float>("Luminance", args, 1); }
        void AddGlyph(int type, void* v, void* c, void* t, void* ctr, float gw, float gh, float tW, void* col) const { void* args[] = { &type, v, c, t, ctr, &gw, &gh, &tW, col }; CallStatic("AddGlyph", args, 9); }
        void AddTri(void* v, void* c, void* t, void* a, void* b, void* d, void* col) const { void* args[] = { v, c, t, a, b, d, col }; CallStatic("AddTri", args, 7); }
        void AddStrokeQuad(void* v, void* c, void* t, void* a, void* b, float halfWidth, void* col) const { void* args[] = { v, c, t, a, b, &halfWidth, col }; CallStatic("AddStrokeQuad", args, 7); }
        void AddEllipseRing(void* v, void* c, void* t, void* ctr, float a, float b, float thickness, void* col, int segments) const { void* args[] = { v, c, t, ctr, &a, &b, &thickness, col, &segments }; CallStatic("AddEllipseRing", args, 9); }
        void AddDot(void* v, void* c, void* t, void* ctr, float r, void* col, int segments) const { void* args[] = { v, c, t, ctr, &r, col, &segments }; CallStatic("AddDot", args, 7); }
    };
}
