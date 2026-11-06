#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class SurrenderSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SurrenderSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "SurrenderSystem") {}
    public:
        void* Evaluate(int vpTotal, int vpLost, int tiles, int snapshot, bool collapsed, float aggression, bool alliesFighting, float limitAdd = 0f) const { void* args[] = { &vpTotal, &vpLost, &tiles, &snapshot, &collapsed, &aggression, &alliesFighting, &limitAdd }; return CallStatic("Evaluate", args, 8); }
        float LimitOf(float aggression, bool alliesFighting, float limitAdd = 0f) const { void* args[] = { &aggression, &alliesFighting, &limitAdd }; return CallStaticValue<float>("LimitOf", args, 3); }
        void* Of(int nationId, void* rels, void* n, void* it, void* cfg, void* atWarWith) const { void* args[] = { &nationId, rels, n, it, cfg, atWarWith }; return CallStatic("Of", args, 6); }
        float SueShareOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("SueShareOf", args, 1); }
        void Track(int nationId, void* s, int tick) const { void* args[] = { &nationId, &s, &tick }; CallStatic("Track", args, 3); }
        bool SuesForPeace(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("SuesForPeace", args, 1); }
        void Forget(int nationId) const { void* args[] = { &nationId }; CallStatic("Forget", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        float BaseLimit() const { return ReadStaticField<float>("BaseLimit"); }
        float LeaderSpan() const { return ReadStaticField<float>("LeaderSpan"); }
        float AlliesBonus() const { return ReadStaticField<float>("AlliesBonus"); }
        float MinLimit() const { return ReadStaticField<float>("MinLimit"); }
        float MaxLimit() const { return ReadStaticField<float>("MaxLimit"); }
        float LandWeight() const { return ReadStaticField<float>("LandWeight"); }
        float LandFree() const { return ReadStaticField<float>("LandFree"); }
        float EconTerm() const { return ReadStaticField<float>("EconTerm"); }
        int MinVp() const { return ReadStaticField<int>("MinVp"); }
        float SueShare() const { return ReadStaticField<float>("SueShare"); }
        int RisingWindowTicks() const { return ReadStaticField<int>("RisingWindowTicks"); }
        float RisingEpsilon() const { return ReadStaticField<float>("RisingEpsilon"); }
    };
}
