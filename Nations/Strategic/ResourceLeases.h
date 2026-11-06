#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class ResourceLeases : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceLeases(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "ResourceLeases") {}
    public:
        float QuotaOf(int k, int units) const { void* __callArgs[] = { &k, &units }; return CallStaticValue<float>("QuotaOf", __callArgs, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Restore(int from, int to, int kind, int units, int endTick) const { void* __callArgs[] = { &from, &to, &kind, &units, &endTick }; CallStatic("Restore", __callArgs, 5); }
        void Open(int from, int to, int kind, int units, int endTick) const { void* __callArgs[] = { &from, &to, &kind, &units, &endTick }; CallStatic("Open", __callArgs, 5); }
        void Apply(int now) const { void* __callArgs[] = { &now }; CallStatic("Apply", __callArgs, 1); }
        int SpareUnits(int nationId, int k) const { void* __callArgs[] = { &nationId, &k }; return CallStaticValue<int>("SpareUnits", __callArgs, 2); }
        int LeasedBetween(int from, int to, int k) const { void* __callArgs[] = { &from, &to, &k }; return CallStaticValue<int>("LeasedBetween", __callArgs, 3); }
        bool Valid(void* item, int performerId, int otherId) const { void* __callArgs[] = { item, &performerId, &otherId }; return CallStaticValue<bool>("Valid", __callArgs, 3); }
        void* Problem(void* item, int performerId, bool performerIsYou) const { void* __callArgs[] = { item, &performerId, &performerIsYou }; return CallStatic("Problem", __callArgs, 3); }
        float Value(void* item, int performerId, int evaluatorId, void* ctx) const { void* __callArgs[] = { item, &performerId, &evaluatorId, &ctx }; return CallStaticValue<float>("Value", __callArgs, 4); }
        int MaxUnits() const { return ReadStaticField<int>("MaxUnits"); }
    };
}
