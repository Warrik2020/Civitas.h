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
        void OnInitializePotentialDrag(void* e) const { void* args[] = { e }; Call("OnInitializePotentialDrag", args, 1); }
        void OnPointerDown(void* e) const { void* args[] = { e }; Call("OnPointerDown", args, 1); }
        void OnDrag(void* e) const { void* args[] = { e }; Call("OnDrag", args, 1); }
        void OnPointerUp(void* e) const { void* args[] = { e }; Call("OnPointerUp", args, 1); }
        void OnPointerMove(void* e) const { void* args[] = { e }; Call("OnPointerMove", args, 1); }
        void OnPointerExit(void* e) const { void* args[] = { e }; Call("OnPointerExit", args, 1); }
        void OnPointerClick(void* e) const { void* args[] = { e }; Call("OnPointerClick", args, 1); }
        void OnScroll(void* e) const { void* args[] = { e }; Call("OnScroll", args, 1); }
        void* onMove() const { return ReadField<void*>("onMove"); }
        void SetOnMove(void* value) const { WriteField<void*>("onMove", value); }
        void* onExit() const { return ReadField<void*>("onExit"); }
        void SetOnExit(void* value) const { WriteField<void*>("onExit", value); }
    };
}
