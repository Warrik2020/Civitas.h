#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyLibrary : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyLibrary(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyLibrary") {}
    public:
        void* Step(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Step", __callArgs, 1); }
        void* Reaction(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Reaction", __callArgs, 1); }
        void* LoadDirectory(void** args = nullptr, int count = 0) const { return CallStatic("LoadDirectory", args, count); }
        void* FromText(void* fileAndText) const { void* __callArgs[] = { fileAndText }; return CallStatic("FromText", __callArgs, 1); }
        void* FromTextFor(int kind, void* fileAndText) const { void* __callArgs[] = { &kind, fileAndText }; return CallStatic("FromTextFor", __callArgs, 2); }
        void* StepList() const { return ReadField<void*>("StepList"); }
        void* Stretches() const { return ReadField<void*>("Stretches"); }
        void* Reactions() const { return ReadField<void*>("Reactions"); }
        void* Demands() const { return ReadField<void*>("Demands"); }
        void* Issues() const { return ReadField<void*>("Issues"); }
        int Kind() const { return ReadField<int>("Kind"); }
        void Kind(int value) const { WriteField<int>("Kind", value); }
    };
}
