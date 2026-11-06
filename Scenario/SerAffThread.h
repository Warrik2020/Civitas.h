#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerAffThread : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerAffThread(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerAffThread") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int theme() const { return ReadField<int>("theme"); }
        void theme(int value) const { WriteField<int>("theme", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int nationBorn() const { return ReadField<int>("nationBorn"); }
        void nationBorn(int value) const { WriteField<int>("nationBorn", value); }
        int openedTick() const { return ReadField<int>("openedTick"); }
        void openedTick(int value) const { WriteField<int>("openedTick", value); }
        int closedTick() const { return ReadField<int>("closedTick"); }
        void closedTick(int value) const { WriteField<int>("closedTick", value); }
        int dueTick() const { return ReadField<int>("dueTick"); }
        void dueTick(int value) const { WriteField<int>("dueTick", value); }
        int causedBy() const { return ReadField<int>("causedBy"); }
        void causedBy(int value) const { WriteField<int>("causedBy", value); }
        int steps() const { return ReadField<int>("steps"); }
        void steps(int value) const { WriteField<int>("steps", value); }
        int peak() const { return ReadField<int>("peak"); }
        void peak(int value) const { WriteField<int>("peak", value); }
        int linkedArc() const { return ReadField<int>("linkedArc"); }
        void linkedArc(int value) const { WriteField<int>("linkedArc", value); }
        bool open() const { return ReadField<bool>("open"); }
        void open(bool value) const { WriteField<bool>("open", value); }
        void* storyId() const { return ReadField<void*>("storyId"); }
        void storyId(void* value) const { WriteField<void*>("storyId", value); }
        void* title() const { return ReadField<void*>("title"); }
        void title(void* value) const { WriteField<void*>("title", value); }
        void* outcome() const { return ReadField<void*>("outcome"); }
        void outcome(void* value) const { WriteField<void*>("outcome", value); }
        void* stepId() const { return ReadField<void*>("stepId"); }
        void stepId(void* value) const { WriteField<void*>("stepId", value); }
        void* nextStepId() const { return ReadField<void*>("nextStepId"); }
        void nextStepId(void* value) const { WriteField<void*>("nextStepId", value); }
        void* causeText() const { return ReadField<void*>("causeText"); }
        void causeText(void* value) const { WriteField<void*>("causeText", value); }
        void* causeFact() const { return ReadField<void*>("causeFact"); }
        void causeFact(void* value) const { WriteField<void*>("causeFact", value); }
        void* cast() const { return ReadField<void*>("cast"); }
        void cast(void* value) const { WriteField<void*>("cast", value); }
        void* varNames() const { return ReadField<void*>("varNames"); }
        void varNames(void* value) const { WriteField<void*>("varNames", value); }
        void* varValues() const { return ReadField<void*>("varValues"); }
        void varValues(void* value) const { WriteField<void*>("varValues", value); }
        void* log() const { return ReadField<void*>("log"); }
        void log(void* value) const { WriteField<void*>("log", value); }
    };
}
