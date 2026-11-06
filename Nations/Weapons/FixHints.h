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
        void CopyFrom(void* other) const { void* __callArgs[] = { other }; Call("CopyFrom", __callArgs, 1); }
        bool FixFor(const char* issueText, void* edit) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(issueText ? issueText : "") : nullptr; void* __callArgs[] = { managed_0, &edit }; return CallValue<bool>("FixFor", __callArgs, 2); }
        bool Ladder(int l) const { void* __callArgs[] = { &l }; return CallValue<bool>("Ladder", __callArgs, 1); }
        bool Option(int l, int o) const { void* __callArgs[] = { &l, &o }; return CallValue<bool>("Option", __callArgs, 2); }
        bool Material(int part) const { void* __callArgs[] = { &part }; return CallValue<bool>("Material", __callArgs, 1); }
        bool Material(int part, int m) const { void* __callArgs[] = { &part, &m }; return CallValue<bool>("Material", __callArgs, 2); }
        bool Part(int k) const { void* __callArgs[] = { &k }; return CallValue<bool>("Part", __callArgs, 1); }
        void* edits() const { return ReadField<void*>("edits"); }
    };
}
