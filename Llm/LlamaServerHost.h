#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlamaServerHost : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlamaServerHost(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlamaServerHost") {}
    public:
        void StopAll() const { CallStatic("StopAll", nullptr, 0); }
        void* TryStartAsync(int preferredNgl, void* ct) const { void* __callArgs[] = { &preferredNgl, ct }; return Call("TryStartAsync", __callArgs, 2); }
        void NoteOutcome(bool ok) const { void* __callArgs[] = { &ok }; Call("NoteOutcome", __callArgs, 1); }
        void PollProcess() const { Call("PollProcess", nullptr, 0); }
        void Stop() const { Call("Stop", nullptr, 0); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void ReapStaleServer() const { CallStatic("ReapStaleServer", nullptr, 0); }
    };
}
