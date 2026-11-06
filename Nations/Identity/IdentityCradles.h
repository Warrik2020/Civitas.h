#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityCradles : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityCradles(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityCradles") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void Add(int axis, int groupId, int untilWorldTick, void* tiles) const { void* __callArgs[] = { &axis, &groupId, &untilWorldTick, tiles }; Call("Add", __callArgs, 4); }
        bool Step(int nowWorldTick, void* alive) const { void* __callArgs[] = { &nowWorldTick, alive }; return CallValue<bool>("Step", __callArgs, 2); }
        void* Grow(void* rt, void* grid, void* ctx, int rootA, int rootB, int newGid, void* birth, float radius, float wobble, int cap) const { void* __callArgs[] = { rt, grid, ctx, &rootA, &rootB, &newGid, birth, &radius, &wobble, &cap }; return CallStatic("Grow", __callArgs, 10); }
        float Noise(int x, int y, uint32_t seed) const { void* __callArgs[] = { &x, &y, &seed }; return CallStaticValue<float>("Noise", __callArgs, 3); }
    };
}
