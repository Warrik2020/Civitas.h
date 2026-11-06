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
        void OnInitializePotentialDrag(void* e) const { void* __callArgs[] = { e }; Call("OnInitializePotentialDrag", __callArgs, 1); }
        void OnPointerDown(void* e) const { void* __callArgs[] = { e }; Call("OnPointerDown", __callArgs, 1); }
        void OnDrag(void* e) const { void* __callArgs[] = { e }; Call("OnDrag", __callArgs, 1); }
        void OnPointerUp(void* e) const { void* __callArgs[] = { e }; Call("OnPointerUp", __callArgs, 1); }
        void OnPointerMove(void* e) const { void* __callArgs[] = { e }; Call("OnPointerMove", __callArgs, 1); }
        void OnPointerExit(void* e) const { void* __callArgs[] = { e }; Call("OnPointerExit", __callArgs, 1); }
        void* onDragTo() const { return ReadField<void*>("onDragTo"); }
        void onDragTo(void* value) const { WriteField<void*>("onDragTo", value); }
        void* onUp() const { return ReadField<void*>("onUp"); }
        void onUp(void* value) const { WriteField<void*>("onUp", value); }
        void* onHover() const { return ReadField<void*>("onHover"); }
        void onHover(void* value) const { WriteField<void*>("onHover", value); }
        void* onExit() const { return ReadField<void*>("onExit"); }
        void onExit(void* value) const { WriteField<void*>("onExit", value); }
        int cols() const { return ReadField<int>("cols"); }
        void cols(int value) const { WriteField<int>("cols", value); }
        int rows() const { return ReadField<int>("rows"); }
        void rows(int value) const { WriteField<int>("rows", value); }
    };
}
