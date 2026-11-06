#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class LocalStoryRelevance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalStoryRelevance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "LocalStoryRelevance") {}
    public:
        void SetTicksPerDay(float tpd) const { void* args[] = { &tpd }; Call("SetTicksPerDay", args, 1); }
        void Reset() const { Call("Reset", nullptr, 0); }
        void* Classify(void* f) const { void* args[] = { &f }; return CallStatic("Classify", args, 1); }
        void* Decide(void* f) const { void* args[] = { &f }; return Call("Decide", args, 1); }
        int Tier2PerArcTicks() const { return ReadField<int>("Tier2PerArcTicks"); }
        void SetTier2PerArcTicks(int value) const { WriteField<int>("Tier2PerArcTicks", value); }
        int Tier2WorldTicks() const { return ReadField<int>("Tier2WorldTicks"); }
        void SetTier2WorldTicks(int value) const { WriteField<int>("Tier2WorldTicks", value); }
        int Tier1RepeatTicks() const { return ReadField<int>("Tier1RepeatTicks"); }
        void SetTier1RepeatTicks(int value) const { WriteField<int>("Tier1RepeatTicks", value); }
        int tier() const { return ReadField<int>("tier"); }
        void SetTier(int value) const { WriteField<int>("tier", value); }
        bool seeded() const { return ReadField<bool>("seeded"); }
        void SetSeeded(bool value) const { WriteField<bool>("seeded", value); }
        bool mine() const { return ReadField<bool>("mine"); }
        void SetMine(bool value) const { WriteField<bool>("mine", value); }
        bool near() const { return ReadField<bool>("near"); }
        void SetNear(bool value) const { WriteField<bool>("near", value); }
        bool greatPower() const { return ReadField<bool>("greatPower"); }
        void SetGreatPower(bool value) const { WriteField<bool>("greatPower", value); }
        bool spectator() const { return ReadField<bool>("spectator"); }
        void SetSpectator(bool value) const { WriteField<bool>("spectator", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void SetArcId(int value) const { WriteField<int>("arcId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
    };
}
