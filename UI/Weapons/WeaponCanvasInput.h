#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Weapons
{
    class WeaponCanvasInput : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponCanvasInput(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Weapons", "WeaponCanvasInput") {}
    public:
        void OnInitializePotentialDrag(void* e) const { void* __callArgs[] = { e }; Call("OnInitializePotentialDrag", __callArgs, 1); }
        void OnPointerDown(void* e) const { void* __callArgs[] = { e }; Call("OnPointerDown", __callArgs, 1); }
        void OnDrag(void* e) const { void* __callArgs[] = { e }; Call("OnDrag", __callArgs, 1); }
        void OnPointerUp(void* e) const { void* __callArgs[] = { e }; Call("OnPointerUp", __callArgs, 1); }
        void OnPointerMove(void* e) const { void* __callArgs[] = { e }; Call("OnPointerMove", __callArgs, 1); }
        void OnPointerExit(void* e) const { void* __callArgs[] = { e }; Call("OnPointerExit", __callArgs, 1); }
        void OnPointerClick(void* e) const { void* __callArgs[] = { e }; Call("OnPointerClick", __callArgs, 1); }
        void OnScroll(void* e) const { void* __callArgs[] = { e }; Call("OnScroll", __callArgs, 1); }
        void* onMove() const { return ReadField<void*>("onMove"); }
        void onMove(void* value) const { WriteField<void*>("onMove", value); }
        void* onExit() const { return ReadField<void*>("onExit"); }
        void onExit(void* value) const { WriteField<void*>("onExit", value); }
    };
}
