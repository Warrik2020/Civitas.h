#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class FieldBubble : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldBubble(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "FieldBubble") {}
    public:
        bool Contains(int id) const { void* __callArgs[] = { &id }; return CallValue<bool>("Contains", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Drop(int id, float now) const { void* __callArgs[] = { &id, &now }; Call("Drop", __callArgs, 2); }
        void Decide(void* cands, float now, int menIn, int budgetMen, void* joins, void* leaves) const { void* __callArgs[] = { cands, &now, &menIn, &budgetMen, joins, leaves }; Call("Decide", __callArgs, 6); }
        void* Partners() const { return ReadField<void*>("Partners"); }
    };
}
