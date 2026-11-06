#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentitySeep : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentitySeep(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentitySeep") {}
    public:
        bool IsTrace(int axis, void* m) const { void* __callArgs[] = { &axis, &m }; return CallStaticValue<bool>("IsTrace", __callArgs, 2); }
        int Visit(int axis, void* rt, void* grid, void* ctx, int chunk, void* onFlip) const { void* __callArgs[] = { &axis, rt, grid, ctx, &chunk, onFlip }; return CallValue<int>("Visit", __callArgs, 6); }
        void Clear() const { Call("Clear", nullptr, 0); }
        float Falloff() const { return ReadStaticField<float>("Falloff"); }
        int MaxTrace() const { return ReadStaticField<int>("MaxTrace"); }
        int Step() const { return ReadStaticField<int>("Step"); }
        int DeadBand() const { return ReadStaticField<int>("DeadBand"); }
        float ApartMul() const { return ReadStaticField<float>("ApartMul"); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        int writes() const { return ReadField<int>("writes"); }
        void writes(int value) const { WriteField<int>("writes", value); }
        int64_t writeTicks() const { return ReadField<int64_t>("writeTicks"); }
        void writeTicks(int64_t value) const { WriteField<int64_t>("writeTicks", value); }
    };
}
