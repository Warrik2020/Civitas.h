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
        float QuotaOf(int k, int units) const { void* args[] = { &k, &units }; return CallStaticValue<float>("QuotaOf", args, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void Restore(int from, int to, int kind, int units, int endTick) const { void* args[] = { &from, &to, &kind, &units, &endTick }; CallStatic("Restore", args, 5); }
        void Open(int from, int to, int kind, int units, int endTick) const { void* args[] = { &from, &to, &kind, &units, &endTick }; CallStatic("Open", args, 5); }
        void Apply(int now) const { void* args[] = { &now }; CallStatic("Apply", args, 1); }
        int SpareUnits(int nationId, int k) const { void* args[] = { &nationId, &k }; return CallStaticValue<int>("SpareUnits", args, 2); }
        int LeasedBetween(int from, int to, int k) const { void* args[] = { &from, &to, &k }; return CallStaticValue<int>("LeasedBetween", args, 3); }
        bool Valid(void* item, int performerId, int otherId) const { void* args[] = { item, &performerId, &otherId }; return CallStaticValue<bool>("Valid", args, 3); }
        void* Problem(void* item, int performerId, bool performerIsYou) const { void* args[] = { item, &performerId, &performerIsYou }; return CallStatic("Problem", args, 3); }
        float Value(void* item, int performerId, int evaluatorId, void* ctx) const { void* args[] = { item, &performerId, &evaluatorId, &ctx }; return CallStaticValue<float>("Value", args, 4); }
        int MaxUnits() const { return ReadStaticField<int>("MaxUnits"); }
    };
}
