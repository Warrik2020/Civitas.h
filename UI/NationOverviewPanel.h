#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NationOverviewPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationOverviewPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NationOverviewPanel") {}
    public:
        void OpenGoal() const { CallStatic("OpenGoal", nullptr, 0); }
        bool OpenHouse(int houseId) const { void* args[] = { &houseId }; return CallStaticValue<bool>("OpenHouse", args, 1); }
        bool OpenState(int stateId) const { void* args[] = { &stateId }; return CallStaticValue<bool>("OpenState", args, 1); }
        void OpenUnion(int focusMemberId = -1) const { void* args[] = { &focusMemberId }; CallStatic("OpenUnion", args, 1); }
        int ScreenOf(void* p) const { void* args[] = { p }; return CallStaticValue<int>("ScreenOf", args, 1); }
        int ScreenTabOf(void* p) const { void* args[] = { p }; return CallStaticValue<int>("ScreenTabOf", args, 1); }
        void* PageOf(void* t) const { void* args[] = { t }; return CallStatic("PageOf", args, 1); }
        void Toggle() const { Call("Toggle", nullptr, 0); }
        void OpenOrToggle(void* tab) const { void* args[] = { tab }; Call("OpenOrToggle", args, 1); }
        void ShowScreenPage(void* page) const { void* args[] = { page }; Call("ShowScreenPage", args, 1); }
        void OpenAt(void* tab) const { void* args[] = { tab }; Call("OpenAt", args, 1); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        bool ArmLandBrush(void* brush) const { void* args[] = { brush }; return CallStaticValue<bool>("ArmLandBrush", args, 1); }
        void StepClaimRadius(int dir) const { void* args[] = { &dir }; CallStatic("StepClaimRadius", args, 1); }
        bool Prebuild() const { return CallValue<bool>("Prebuild", nullptr, 0); }
        int ClaimRadiusMin() const { return ReadStaticField<int>("ClaimRadiusMin"); }
        int ClaimRadiusMax() const { return ReadStaticField<int>("ClaimRadiusMax"); }
        void* group() const { return ReadField<void*>("group"); }
        void SetGroup(void* value) const { WriteField<void*>("group", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* cost() const { return ReadField<void*>("cost"); }
        void SetCost(void* value) const { WriteField<void*>("cost", value); }
        void* body() const { return ReadField<void*>("body"); }
        void SetBody(void* value) const { WriteField<void*>("body", value); }
        void* state() const { return ReadField<void*>("state"); }
        void SetState(void* value) const { WriteField<void*>("state", value); }
        void* useLabel() const { return ReadField<void*>("useLabel"); }
        void SetUseLabel(void* value) const { WriteField<void*>("useLabel", value); }
        void* use() const { return ReadField<void*>("use"); }
        void SetUse(void* value) const { WriteField<void*>("use", value); }
        int action() const { return ReadField<int>("action"); }
        void SetAction(int value) const { WriteField<int>("action", value); }
        int nation() const { return ReadField<int>("nation"); }
        void SetNation(int value) const { WriteField<int>("nation", value); }
        void* bond() const { return ReadField<void*>("bond"); }
        void SetBond(void* value) const { WriteField<void*>("bond", value); }
        void* terms() const { return ReadField<void*>("terms"); }
        void SetTerms(void* value) const { WriteField<void*>("terms", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
    };
}
