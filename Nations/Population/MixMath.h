#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class MixMath : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MixMath(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "MixMath") {}
    public:
        void* Blend(void* a, float wA, void* b, float wB, uint32_t hash) const { void* __callArgs[] = { &a, &wA, &b, &wB, &hash }; return CallStatic("Blend", __callArgs, 5); }
        void* Build(uint16_t a, float va, uint16_t b, float vb, uint16_t c, float vc, uint32_t hash) const { void* __callArgs[] = { &a, &va, &b, &vb, &c, &vc, &hash }; return CallStatic("Build", __callArgs, 7); }
        uint32_t Next(uint32_t h) const { void* __callArgs[] = { &h }; return CallStaticValue<uint32_t>("Next", __callArgs, 1); }
        uint32_t Hash(int a, int b, int c) const { void* __callArgs[] = { &a, &b, &c }; return CallStaticValue<uint32_t>("Hash", __callArgs, 3); }
        void* TakeOut(void* m, int leaveQ, int r0, int r1, int r2, bool p0, bool p1, bool p2, uint32_t hash, void* left) const { void* __callArgs[] = { &m, &leaveQ, &r0, &r1, &r2, &p0, &p1, &p2, &hash, &left }; return CallStatic("TakeOut", __callArgs, 10); }
    };
}
