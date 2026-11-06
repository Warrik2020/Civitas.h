#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlmBridge : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlmBridge(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlmBridge") {}
    public:
        void Start() const { Call("Start", nullptr, 0); }
        void Stop() const { Call("Stop", nullptr, 0); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        int Submit(void* req) const { void* __callArgs[] = { req }; return CallValue<int>("Submit", __callArgs, 1); }
        bool TryDequeue(void* result) const { void* __callArgs[] = { &result }; return CallValue<bool>("TryDequeue", __callArgs, 1); }
        int MaxPending() const { return ReadStaticField<int>("MaxPending"); }
    };
}
