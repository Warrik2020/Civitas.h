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
        bool Contains(int id) const { void* args[] = { &id }; return CallValue<bool>("Contains", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Drop(int id, float now) const { void* args[] = { &id, &now }; Call("Drop", args, 2); }
        void Decide(void* cands, float now, int menIn, int budgetMen, void* joins, void* leaves) const { void* args[] = { cands, &now, &menIn, &budgetMen, joins, leaves }; Call("Decide", args, 6); }
        void* Partners() const { return ReadField<void*>("Partners"); }
        float joinedAt() const { return ReadField<float>("joinedAt"); }
        void SetJoinedAt(float value) const { WriteField<float>("joinedAt", value); }
        float outsideSince() const { return ReadField<float>("outsideSince"); }
        void SetOutsideSince(float value) const { WriteField<float>("outsideSince", value); }
    };
}
