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
        void SetId(int value) const { WriteField<int>("id", value); }
        int theme() const { return ReadField<int>("theme"); }
        void SetTheme(int value) const { WriteField<int>("theme", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int nationBorn() const { return ReadField<int>("nationBorn"); }
        void SetNationBorn(int value) const { WriteField<int>("nationBorn", value); }
        int openedTick() const { return ReadField<int>("openedTick"); }
        void SetOpenedTick(int value) const { WriteField<int>("openedTick", value); }
        int closedTick() const { return ReadField<int>("closedTick"); }
        void SetClosedTick(int value) const { WriteField<int>("closedTick", value); }
        int dueTick() const { return ReadField<int>("dueTick"); }
        void SetDueTick(int value) const { WriteField<int>("dueTick", value); }
        int causedBy() const { return ReadField<int>("causedBy"); }
        void SetCausedBy(int value) const { WriteField<int>("causedBy", value); }
        int steps() const { return ReadField<int>("steps"); }
        void SetSteps(int value) const { WriteField<int>("steps", value); }
        int peak() const { return ReadField<int>("peak"); }
        void SetPeak(int value) const { WriteField<int>("peak", value); }
        int linkedArc() const { return ReadField<int>("linkedArc"); }
        void SetLinkedArc(int value) const { WriteField<int>("linkedArc", value); }
        bool open() const { return ReadField<bool>("open"); }
        void SetOpen(bool value) const { WriteField<bool>("open", value); }
        void* storyId() const { return ReadField<void*>("storyId"); }
        void SetStoryId(void* value) const { WriteField<void*>("storyId", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* outcome() const { return ReadField<void*>("outcome"); }
        void SetOutcome(void* value) const { WriteField<void*>("outcome", value); }
        void* stepId() const { return ReadField<void*>("stepId"); }
        void SetStepId(void* value) const { WriteField<void*>("stepId", value); }
        void* nextStepId() const { return ReadField<void*>("nextStepId"); }
        void SetNextStepId(void* value) const { WriteField<void*>("nextStepId", value); }
        void* causeText() const { return ReadField<void*>("causeText"); }
        void SetCauseText(void* value) const { WriteField<void*>("causeText", value); }
        void* causeFact() const { return ReadField<void*>("causeFact"); }
        void SetCauseFact(void* value) const { WriteField<void*>("causeFact", value); }
        void* cast() const { return ReadField<void*>("cast"); }
        void SetCast(void* value) const { WriteField<void*>("cast", value); }
        void* varNames() const { return ReadField<void*>("varNames"); }
        void SetVarNames(void* value) const { WriteField<void*>("varNames", value); }
        void* varValues() const { return ReadField<void*>("varValues"); }
        void SetVarValues(void* value) const { WriteField<void*>("varValues", value); }
        void* log() const { return ReadField<void*>("log"); }
        void SetLog(void* value) const { WriteField<void*>("log", value); }
    };
}
