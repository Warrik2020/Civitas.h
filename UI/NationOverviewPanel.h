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
        bool OpenHouse(int houseId) const { void* __callArgs[] = { &houseId }; return CallStaticValue<bool>("OpenHouse", __callArgs, 1); }
        bool OpenState(int stateId) const { void* __callArgs[] = { &stateId }; return CallStaticValue<bool>("OpenState", __callArgs, 1); }
        void OpenUnion(int focusMemberId = -1) const { void* __callArgs[] = { &focusMemberId }; CallStatic("OpenUnion", __callArgs, 1); }
        int ScreenOf(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<int>("ScreenOf", __callArgs, 1); }
        int ScreenTabOf(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<int>("ScreenTabOf", __callArgs, 1); }
        void* PageOf(void* t) const { void* __callArgs[] = { t }; return CallStatic("PageOf", __callArgs, 1); }
        void Toggle() const { Call("Toggle", nullptr, 0); }
        void OpenOrToggle(void* tab) const { void* __callArgs[] = { tab }; Call("OpenOrToggle", __callArgs, 1); }
        void ShowScreenPage(void* page) const { void* __callArgs[] = { page }; Call("ShowScreenPage", __callArgs, 1); }
        void OpenAt(void* tab) const { void* __callArgs[] = { tab }; Call("OpenAt", __callArgs, 1); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        bool ArmLandBrush(void* brush) const { void* __callArgs[] = { brush }; return CallStaticValue<bool>("ArmLandBrush", __callArgs, 1); }
        void StepClaimRadius(int dir) const { void* __callArgs[] = { &dir }; CallStatic("StepClaimRadius", __callArgs, 1); }
        bool Prebuild() const { return CallValue<bool>("Prebuild", nullptr, 0); }
        int ClaimRadiusMin() const { return ReadStaticField<int>("ClaimRadiusMin"); }
        int ClaimRadiusMax() const { return ReadStaticField<int>("ClaimRadiusMax"); }
    };
}
