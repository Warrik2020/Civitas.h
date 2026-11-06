#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class AiLod : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AiLod(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "AiLod") {}
    public:
        bool On(void* s) const { void* args[] = { s }; return CallStaticValue<bool>("On", args, 1); }
        int Mul(void* s, int nationId) const { void* args[] = { s, &nationId }; return CallStaticValue<int>("Mul", args, 2); }
        int Tier(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("Tier", args, 1); }
        int RawMul(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("RawMul", args, 1); }
        bool Due(void* s, int nationId, int tick, int interval, int phase) const { void* args[] = { s, &nationId, &tick, &interval, &phase }; return CallStaticValue<bool>("Due", args, 5); }
        bool Pick(void* s, int nationId, int cycle) const { void* args[] = { s, &nationId, &cycle }; return CallStaticValue<bool>("Pick", args, 3); }
        void Configure(void* cfg) const { void* args[] = { cfg }; CallStatic("Configure", args, 1); }
        void ConfigureRaw(bool enabled, bool allSystems = true) const { void* args[] = { &enabled, &allSystems }; CallStatic("ConfigureRaw", args, 2); }
        void Publish(void* tiers, void* muls) const { void* args[] = { tiers, muls }; CallStatic("Publish", args, 2); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void* Summary() const { return CallStatic("Summary", nullptr, 0); }
        uint8_t TierPlayer() const { return ReadStaticField<uint8_t>("TierPlayer"); }
        uint8_t TierTied() const { return ReadStaticField<uint8_t>("TierTied"); }
        uint8_t TierRegional() const { return ReadStaticField<uint8_t>("TierRegional"); }
        uint8_t TierDistant() const { return ReadStaticField<uint8_t>("TierDistant"); }
        void* TierCounts() const { return ReadStaticField<void*>("TierCounts"); }
        int WarPulled() const { return ReadStaticField<int>("WarPulled"); }
        void SetWarPulled(int value) const { WriteStaticField<int>("WarPulled", value); }
        int Recomputes() const { return ReadStaticField<int>("Recomputes"); }
        void SetRecomputes(int value) const { WriteStaticField<int>("Recomputes", value); }
    };
}
