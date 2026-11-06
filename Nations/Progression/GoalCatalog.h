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
        void* KindName(int k) const { void* __callArgs[] = { &k }; return CallStatic("KindName", __callArgs, 1); }
        void* Title(void* g) const { void* __callArgs[] = { g }; return CallStatic("Title", __callArgs, 1); }
        void* DoneLine(int k, const char* target) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(target ? target : "") : nullptr; void* __callArgs[] = { &k, managed_1 }; return CallStatic("DoneLine", __callArgs, 2); }
        void* Pitch(int k) const { void* __callArgs[] = { &k }; return CallStatic("Pitch", __callArgs, 1); }
        float ReformStabilityTarget(float start) const { void* __callArgs[] = { &start }; return CallStaticValue<float>("ReformStabilityTarget", __callArgs, 1); }
        int Judge(void* g, void* c, const char*& why) const { void* __callArgs[] = { g, &c, &why }; return CallStaticValue<int>("Judge", __callArgs, 3); }
        int DestroyLeftTiles(void* g) const { void* __callArgs[] = { g }; return CallStaticValue<int>("DestroyLeftTiles", __callArgs, 1); }
        float Progress01(void* g, void* c) const { void* __callArgs[] = { g, &c }; return CallStaticValue<float>("Progress01", __callArgs, 2); }
        void Conditions(void* g, void* c, void* dst) const { void* __callArgs[] = { g, &c, dst }; CallStatic("Conditions", __callArgs, 3); }
        float StackScale(int times) const { void* __callArgs[] = { &times }; return CallStaticValue<float>("StackScale", __callArgs, 1); }
        void* BonusOf(int k, int times) const { void* __callArgs[] = { &k, &times }; return CallStatic("BonusOf", __callArgs, 2); }
        void* Bonuses(void* earned) const { void* __callArgs[] = { earned }; return CallStatic("Bonuses", __callArgs, 1); }
        void* NextBonusText(int k, int timesSoFar, bool colorize) const { void* __callArgs[] = { &k, &timesSoFar, &colorize }; return CallStatic("NextBonusText", __callArgs, 3); }
        void* BonusText(int k, int times, bool colorize) const { void* __callArgs[] = { &k, &times, &colorize }; return CallStatic("BonusText", __callArgs, 3); }
        void* Pct(float v) const { void* __callArgs[] = { &v }; return CallStatic("Pct", __callArgs, 1); }
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
