#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class GiftBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GiftBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "GiftBalance") {}
    public:
        float ReasonMul(int reason) const { void* __callArgs[] = { &reason }; return CallStaticValue<float>("ReasonMul", __callArgs, 1); }
        float NormShare() const { return ReadStaticField<float>("NormShare"); }
        float FriendshipMul() const { return ReadStaticField<float>("FriendshipMul"); }
        float ApologyMul() const { return ReadStaticField<float>("ApologyMul"); }
        float WartimeMul() const { return ReadStaticField<float>("WartimeMul"); }
        float ApologyGrudgeRate() const { return ReadStaticField<float>("ApologyGrudgeRate"); }
        float WartimeExtraCap() const { return ReadStaticField<float>("WartimeExtraCap"); }
        float MinGoodwill() const { return ReadStaticField<float>("MinGoodwill"); }
    };
}
