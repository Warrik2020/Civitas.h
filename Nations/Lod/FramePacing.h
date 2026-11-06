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
        void NoteCause(int frame, const char* label) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { &frame, managed_1 }; CallStatic("NoteCause", args, 2); }
        void NoteWorstFrame(float ms, const char* report) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(report ? report : "") : nullptr; void* args[] = { &ms, managed_1 }; CallStatic("NoteWorstFrame", args, 2); }
        void NoteStepAlloc(const char* name, int64_t bytes) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0, &bytes }; CallStatic("NoteStepAlloc", args, 2); }
        void NoteSimFrame() const { CallStatic("NoteSimFrame", nullptr, 0); }
        void NoteSettle(const char* why, double ms) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* args[] = { managed_0, &ms }; CallStatic("NoteSettle", args, 2); }
        void NoteLanding(double owedSeconds, bool late) const { void* args[] = { &owedSeconds, &late }; CallStatic("NoteLanding", args, 2); }
        void NoteStep(const char* name, double ms) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0, &ms }; CallStatic("NoteStep", args, 2); }
        void NoteStepCall(double budgetMs, double overrunMs) const { void* args[] = { &budgetMs, &overrunMs }; CallStatic("NoteStepCall", args, 2); }
        void NoteOverrun(void* who, void* inner, double ms) const { void* args[] = { who, inner, &ms }; CallStatic("NoteOverrun", args, 3); }
        double OverrunReportMs() const { return ReadStaticField<double>("OverrunReportMs"); }
        void* who() const { return ReadField<void*>("who"); }
        void SetWho(void* value) const { WriteField<void*>("who", value); }
        void* inner() const { return ReadField<void*>("inner"); }
        void SetInner(void* value) const { WriteField<void*>("inner", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        double sumMs() const { return ReadField<double>("sumMs"); }
        void SetSumMs(double value) const { WriteField<double>("sumMs", value); }
        double maxMs() const { return ReadField<double>("maxMs"); }
        void SetMaxMs(double value) const { WriteField<double>("maxMs", value); }
    };
}
