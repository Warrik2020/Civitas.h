#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class ContestFactorCache : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ContestFactorCache(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "ContestFactorCache") {}
    public:
        bool TryGet(int tile, int tick, int pair, float& value) const { void* args[] = { &tile, &tick, &pair, &value }; return CallValue<bool>("TryGet", args, 4); }
        void Store(int tile, int pair, float value, int expiry) const { void* args[] = { &tile, &pair, &value, &expiry }; Call("Store", args, 4); }
        void Sweep(int tick) const { void* args[] = { &tick }; Call("Sweep", args, 1); }
        float value() const { return ReadField<float>("value"); }
        void SetValue(float value) const { WriteField<float>("value", value); }
        int expiry() const { return ReadField<int>("expiry"); }
        void SetExpiry(int value) const { WriteField<int>("expiry", value); }
        int pair() const { return ReadField<int>("pair"); }
        void SetPair(int value) const { WriteField<int>("pair", value); }
    };
}
