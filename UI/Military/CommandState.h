#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class CommandState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "CommandState") {}
    public:
        void MarkGesture() const { CallStatic("MarkGesture", nullptr, 0); }
        void FocusArmy(int armyId) const { void* args[] = { &armyId }; CallStatic("FocusArmy", args, 1); }
        void FocusFront(int frontId) const { void* args[] = { &frontId }; CallStatic("FocusFront", args, 1); }
        void OnMapSelection() const { CallStatic("OnMapSelection", nullptr, 0); }
        void ResetForScene() const { CallStatic("ResetForScene", nullptr, 0); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void CollectCommands(void* into) const { void* args[] = { into }; CallStatic("CollectCommands", args, 1); }
        void CollectRoster(int armyId, int frontId, void* into) const { void* args[] = { &armyId, &frontId, into }; CallStatic("CollectRoster", args, 3); }
        bool IsInHand(void* e) const { void* args[] = { e }; return CallStaticValue<bool>("IsInHand", args, 1); }
        void* Flash(void** args = nullptr, int count = 0) const { return CallStatic("Flash", args, count); }
        bool Report(void* r) const { void* args[] = { r }; return CallStaticValue<bool>("Report", args, 1); }
        bool TryGetFlash(const char*& text, void* tone) const { void* args[] = { &text, &tone }; return CallStaticValue<bool>("TryGetFlash", args, 2); }
        void ClearFlash() const { CallStatic("ClearFlash", nullptr, 0); }
        int armyId() const { return ReadField<int>("armyId"); }
        void SetArmyId(int value) const { WriteField<int>("armyId", value); }
        int frontId() const { return ReadField<int>("frontId"); }
        void SetFrontId(int value) const { WriteField<int>("frontId", value); }
    };
}
