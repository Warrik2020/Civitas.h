#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class FramePacing : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FramePacing(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "FramePacing") {}
    public:
        void NoteCause(int frame, const char* label) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { &frame, managed_1 }; CallStatic("NoteCause", __callArgs, 2); }
        void NoteWorstFrame(float ms, const char* report) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(report ? report : "") : nullptr; void* __callArgs[] = { &ms, managed_1 }; CallStatic("NoteWorstFrame", __callArgs, 2); }
        void NoteStepAlloc(const char* name, int64_t bytes) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, &bytes }; CallStatic("NoteStepAlloc", __callArgs, 2); }
        void NoteSimFrame() const { CallStatic("NoteSimFrame", nullptr, 0); }
        void NoteSettle(const char* why, double ms) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* __callArgs[] = { managed_0, &ms }; CallStatic("NoteSettle", __callArgs, 2); }
        void NoteLanding(double owedSeconds, bool late) const { void* __callArgs[] = { &owedSeconds, &late }; CallStatic("NoteLanding", __callArgs, 2); }
        void NoteStep(const char* name, double ms) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, &ms }; CallStatic("NoteStep", __callArgs, 2); }
        void NoteStepCall(double budgetMs, double overrunMs) const { void* __callArgs[] = { &budgetMs, &overrunMs }; CallStatic("NoteStepCall", __callArgs, 2); }
        void NoteOverrun(void* who, void* inner, double ms) const { void* __callArgs[] = { who, inner, &ms }; CallStatic("NoteOverrun", __callArgs, 3); }
        double OverrunReportMs() const { return ReadStaticField<double>("OverrunReportMs"); }
    };
}
