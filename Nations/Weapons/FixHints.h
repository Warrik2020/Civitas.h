#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class FixHints : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FixHints(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "FixHints") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void CopyFrom(void* other) const { void* args[] = { other }; Call("CopyFrom", args, 1); }
        bool FixFor(const char* issueText, void* edit) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(issueText ? issueText : "") : nullptr; void* args[] = { managed_0, &edit }; return CallValue<bool>("FixFor", args, 2); }
        bool Ladder(int l) const { void* args[] = { &l }; return CallValue<bool>("Ladder", args, 1); }
        bool Option(int l, int o) const { void* args[] = { &l, &o }; return CallValue<bool>("Option", args, 2); }
        bool Material(int part) const { void* args[] = { &part }; return CallValue<bool>("Material", args, 1); }
        bool Material(int part, int m) const { void* args[] = { &part, &m }; return CallValue<bool>("Material", args, 2); }
        bool Part(int k) const { void* args[] = { &k }; return CallValue<bool>("Part", args, 1); }
        void* edits() const { return ReadField<void*>("edits"); }
    };
}
