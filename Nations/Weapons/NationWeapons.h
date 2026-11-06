#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class NationWeapons : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationWeapons(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "NationWeapons") {}
    public:
        void* Find(int id) const { void* __callArgs[] = { &id }; return Call("Find", __callArgs, 1); }
        void* FindTemplate(int id) const { void* __callArgs[] = { &id }; return Call("FindTemplate", __callArgs, 1); }
        int CountOf(int domain) const { void* __callArgs[] = { &domain }; return CallValue<int>("CountOf", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* designs() const { return ReadField<void*>("designs"); }
        void* templates() const { return ReadField<void*>("templates"); }
        int nextDesignId() const { return ReadField<int>("nextDesignId"); }
        void nextDesignId(int value) const { WriteField<int>("nextDesignId", value); }
        int nextTemplateId() const { return ReadField<int>("nextTemplateId"); }
        void nextTemplateId(int value) const { WriteField<int>("nextTemplateId", value); }
        void* currentTemplate() const { return ReadField<void*>("currentTemplate"); }
        int retoolUntilTick() const { return ReadField<int>("retoolUntilTick"); }
        void retoolUntilTick(int value) const { WriteField<int>("retoolUntilTick", value); }
        bool planDirty() const { return ReadField<bool>("planDirty"); }
        void planDirty(bool value) const { WriteField<bool>("planDirty", value); }
        int nextPlanTick() const { return ReadField<int>("nextPlanTick"); }
        void nextPlanTick(int value) const { WriteField<int>("nextPlanTick", value); }
        int lastPlanPot() const { return ReadField<int>("lastPlanPot"); }
        void lastPlanPot(int value) const { WriteField<int>("lastPlanPot", value); }
        void* lines() const { return ReadField<void*>("lines"); }
        void* aiTemplateKey() const { return ReadField<void*>("aiTemplateKey"); }
        int nextAiTick() const { return ReadField<int>("nextAiTick"); }
        void nextAiTick(int value) const { WriteField<int>("nextAiTick", value); }
        float aiRetoolReserve() const { return ReadField<float>("aiRetoolReserve"); }
        void aiRetoolReserve(float value) const { WriteField<float>("aiRetoolReserve", value); }
        void* bureau() const { return ReadField<void*>("bureau"); }
        bool primed() const { return ReadField<bool>("primed"); }
        void primed(bool value) const { WriteField<bool>("primed", value); }
        bool openingIssued() const { return ReadField<bool>("openingIssued"); }
        void openingIssued(bool value) const { WriteField<bool>("openingIssued", value); }
        bool openingKitIssued() const { return ReadField<bool>("openingKitIssued"); }
        void openingKitIssued(bool value) const { WriteField<bool>("openingKitIssued", value); }
    };
}
