#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class LineInput : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineInput(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "LineInput") {}
    public:
        bool IsSelected(int bat) const { void* __callArgs[] = { &bat }; return CallValue<bool>("IsSelected", __callArgs, 1); }
        bool AnyControllableSelected() const { return CallValue<bool>("AnyControllableSelected", nullptr, 0); }
        void* TakeNote() const { return Call("TakeNote", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Select(int bat, bool add) const { void* __callArgs[] = { &bat, &add }; Call("Select", __callArgs, 2); }
        void SelectMember(int member, bool add) const { void* __callArgs[] = { &member, &add }; Call("SelectMember", __callArgs, 2); }
        void Order(int order) const { void* __callArgs[] = { &order }; Call("Order", __callArgs, 1); }
        void Update() const { Call("Update", nullptr, 0); }
        void* Selected() const { return ReadField<void*>("Selected"); }
    };
}
