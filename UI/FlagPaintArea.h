#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class FlagPaintArea : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagPaintArea(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "FlagPaintArea") {}
    public:
        void OnInitializePotentialDrag(void* e) const { void* args[] = { e }; Call("OnInitializePotentialDrag", args, 1); }
        void OnPointerDown(void* e) const { void* args[] = { e }; Call("OnPointerDown", args, 1); }
        void OnDrag(void* e) const { void* args[] = { e }; Call("OnDrag", args, 1); }
        void OnPointerUp(void* e) const { void* args[] = { e }; Call("OnPointerUp", args, 1); }
        void OnPointerMove(void* e) const { void* args[] = { e }; Call("OnPointerMove", args, 1); }
        void OnPointerExit(void* e) const { void* args[] = { e }; Call("OnPointerExit", args, 1); }
        void* onDragTo() const { return ReadField<void*>("onDragTo"); }
        void SetOnDragTo(void* value) const { WriteField<void*>("onDragTo", value); }
        void* onUp() const { return ReadField<void*>("onUp"); }
        void SetOnUp(void* value) const { WriteField<void*>("onUp", value); }
        void* onHover() const { return ReadField<void*>("onHover"); }
        void SetOnHover(void* value) const { WriteField<void*>("onHover", value); }
        void* onExit() const { return ReadField<void*>("onExit"); }
        void SetOnExit(void* value) const { WriteField<void*>("onExit", value); }
        int cols() const { return ReadField<int>("cols"); }
        void SetCols(int value) const { WriteField<int>("cols", value); }
        int rows() const { return ReadField<int>("rows"); }
        void SetRows(int value) const { WriteField<int>("rows", value); }
    };
}
