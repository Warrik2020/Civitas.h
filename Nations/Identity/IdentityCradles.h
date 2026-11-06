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
        void Add(int axis, int groupId, int untilWorldTick, void* tiles) const { void* args[] = { &axis, &groupId, &untilWorldTick, tiles }; Call("Add", args, 4); }
        bool Step(int nowWorldTick, void* alive) const { void* args[] = { &nowWorldTick, alive }; return CallValue<bool>("Step", args, 2); }
        void* Grow(void* rt, void* grid, void* ctx, int rootA, int rootB, int newGid, void* birth, float radius, float wobble, int cap) const { void* args[] = { rt, grid, ctx, &rootA, &rootB, &newGid, birth, &radius, &wobble, &cap }; return CallStatic("Grow", args, 10); }
        float Noise(int x, int y, uint32_t seed) const { void* args[] = { &x, &y, &seed }; return CallStaticValue<float>("Noise", args, 3); }
        int RootAt(int chunk, int off) const { void* args[] = { &chunk, &off }; return CallValue<int>("RootAt", args, 2); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
        int untilWorldTick() const { return ReadField<int>("untilWorldTick"); }
        void SetUntilWorldTick(int value) const { WriteField<int>("untilWorldTick", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        void SetTiles(void* value) const { WriteField<void*>("tiles", value); }
        int chunksWide() const { return ReadField<int>("chunksWide"); }
        void* pages() const { return ReadField<void*>("pages"); }
    };
}
