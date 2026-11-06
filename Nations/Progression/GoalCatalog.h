#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class GoalCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GoalCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "GoalCatalog") {}
    public:
        void* KindName(int k) const { void* args[] = { &k }; return CallStatic("KindName", args, 1); }
        void* Title(void* g) const { void* args[] = { g }; return CallStatic("Title", args, 1); }
        void* DoneLine(int k, const char* target) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(target ? target : "") : nullptr; void* args[] = { &k, managed_1 }; return CallStatic("DoneLine", args, 2); }
        void* Pitch(int k) const { void* args[] = { &k }; return CallStatic("Pitch", args, 1); }
        float ReformStabilityTarget(float start) const { void* args[] = { &start }; return CallStaticValue<float>("ReformStabilityTarget", args, 1); }
        int Judge(void* g, void* c, const char*& why) const { void* args[] = { g, &c, &why }; return CallStaticValue<int>("Judge", args, 3); }
        int DestroyLeftTiles(void* g) const { void* args[] = { g }; return CallStaticValue<int>("DestroyLeftTiles", args, 1); }
        float Progress01(void* g, void* c) const { void* args[] = { g, &c }; return CallStaticValue<float>("Progress01", args, 2); }
        void Conditions(void* g, void* c, void* dst) const { void* args[] = { g, &c, dst }; CallStatic("Conditions", args, 3); }
        float StackScale(int times) const { void* args[] = { &times }; return CallStaticValue<float>("StackScale", args, 1); }
        void* BonusOf(int k, int times) const { void* args[] = { &k, &times }; return CallStatic("BonusOf", args, 2); }
        void* Bonuses(void* earned) const { void* args[] = { earned }; return CallStatic("Bonuses", args, 1); }
        void* NextBonusText(int k, int timesSoFar, bool colorize) const { void* args[] = { &k, &timesSoFar, &colorize }; return CallStatic("NextBonusText", args, 3); }
        void* BonusText(int k, int times, bool colorize) const { void* args[] = { &k, &times, &colorize }; return CallStatic("BonusText", args, 3); }
        void* Pct(float v) const { void* args[] = { &v }; return CallStatic("Pct", args, 1); }
        void* Kinds() const { return ReadStaticField<void*>("Kinds"); }
        float DestroyLandLeft() const { return ReadStaticField<float>("DestroyLandLeft"); }
        float ReformStabilityFloor() const { return ReadStaticField<float>("ReformStabilityFloor"); }
        float ReformStabilityGain() const { return ReadStaticField<float>("ReformStabilityGain"); }
        float ReformStabilityCeiling() const { return ReadStaticField<float>("ReformStabilityCeiling"); }
        int ReformQuietYears() const { return ReadStaticField<int>("ReformQuietYears"); }
        float BoomGrowth() const { return ReadStaticField<float>("BoomGrowth"); }
        float StackFalloff() const { return ReadStaticField<float>("StackFalloff"); }
        int MaxStack() const { return ReadStaticField<int>("MaxStack"); }
    };
}
