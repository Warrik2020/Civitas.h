#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionLoyalty : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionLoyalty(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionLoyalty") {}
    public:
        void* Read(int memberId, void* mgr, void* ctx, void* extras = nullptr) const { void* args[] = { &memberId, mgr, &ctx, extras }; return CallStatic("Read", args, 4); }
        int Classify(bool ruler, bool player, float contentment, float contentmentLine, float regard, float regardLine, int graceLeft, int shieldLeft, float happyMargin, float opinionMargin) const { void* args[] = { &ruler, &player, &contentment, &contentmentLine, &regard, &regardLine, &graceLeft, &shieldLeft, &happyMargin, &opinionMargin }; return CallStaticValue<int>("Classify", args, 10); }
        float SubsidyCost(int memberId, void* ctx) const { void* args[] = { &memberId, &ctx }; return CallStaticValue<float>("SubsidyCost", args, 2); }
        int CheckSubsidy(int rulerId, int memberId, void* mgr, void* ctx) const { void* args[] = { &rulerId, &memberId, mgr, &ctx }; return CallStaticValue<int>("CheckSubsidy", args, 4); }
        int Subsidise(int rulerId, int memberId, void* mgr, void* ctx) const { void* args[] = { &rulerId, &memberId, mgr, &ctx }; return CallStaticValue<int>("Subsidise", args, 4); }
        int CheckAutonomy(int rulerId, int memberId, void* mgr, void* ctx) const { void* args[] = { &rulerId, &memberId, mgr, &ctx }; return CallStaticValue<int>("CheckAutonomy", args, 4); }
        int GrantAutonomy(int rulerId, int memberId, void* mgr, void* ctx, int& moved) const { void* args[] = { &rulerId, &memberId, mgr, &ctx, &moved }; return CallStaticValue<int>("GrantAutonomy", args, 5); }
        void AiTend(int rulerId, void* mgr, void* ctx) const { void* args[] = { &rulerId, mgr, &ctx }; CallStatic("AiTend", args, 3); }
        void* ExtraTerms() const { return ReadStaticField<void*>("ExtraTerms"); }
        void SetExtraTerms(void* value) const { WriteStaticField<void*>("ExtraTerms", value); }
    };
}
