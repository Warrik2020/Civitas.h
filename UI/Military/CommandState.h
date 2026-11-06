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
        void FocusArmy(int armyId) const { void* __callArgs[] = { &armyId }; CallStatic("FocusArmy", __callArgs, 1); }
        void FocusFront(int frontId) const { void* __callArgs[] = { &frontId }; CallStatic("FocusFront", __callArgs, 1); }
        void OnMapSelection() const { CallStatic("OnMapSelection", nullptr, 0); }
        void ResetForScene() const { CallStatic("ResetForScene", nullptr, 0); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void CollectCommands(void* into) const { void* __callArgs[] = { into }; CallStatic("CollectCommands", __callArgs, 1); }
        void CollectRoster(int armyId, int frontId, void* into) const { void* __callArgs[] = { &armyId, &frontId, into }; CallStatic("CollectRoster", __callArgs, 3); }
        bool IsInHand(void* e) const { void* __callArgs[] = { e }; return CallStaticValue<bool>("IsInHand", __callArgs, 1); }
        void* Flash(void** args = nullptr, int count = 0) const { return CallStatic("Flash", args, count); }
        bool Report(void* r) const { void* __callArgs[] = { r }; return CallStaticValue<bool>("Report", __callArgs, 1); }
        bool TryGetFlash(const char*& text, void* tone) const { void* __callArgs[] = { &text, &tone }; return CallStaticValue<bool>("TryGetFlash", __callArgs, 2); }
        void ClearFlash() const { CallStatic("ClearFlash", nullptr, 0); }
    };
}
