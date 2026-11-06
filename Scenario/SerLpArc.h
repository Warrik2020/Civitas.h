#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLpArc : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLpArc(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLpArc") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int titleForm() const { return ReadField<int>("titleForm"); }
        void SetTitleForm(int value) const { WriteField<int>("titleForm", value); }
        int titleOrdinal() const { return ReadField<int>("titleOrdinal"); }
        void SetTitleOrdinal(int value) const { WriteField<int>("titleOrdinal", value); }
        int subject() const { return ReadField<int>("subject"); }
        void SetSubject(int value) const { WriteField<int>("subject", value); }
        int other() const { return ReadField<int>("other"); }
        void SetOther(int value) const { WriteField<int>("other", value); }
        int record() const { return ReadField<int>("record"); }
        void SetRecord(int value) const { WriteField<int>("record", value); }
        int opened() const { return ReadField<int>("opened"); }
        void SetOpened(int value) const { WriteField<int>("opened", value); }
        int closed() const { return ReadField<int>("closed"); }
        void SetClosed(int value) const { WriteField<int>("closed", value); }
        int lastBeat() const { return ReadField<int>("lastBeat"); }
        void SetLastBeat(int value) const { WriteField<int>("lastBeat", value); }
        int anchor() const { return ReadField<int>("anchor"); }
        void SetAnchor(int value) const { WriteField<int>("anchor", value); }
        int beatTotal() const { return ReadField<int>("beatTotal"); }
        void SetBeatTotal(int value) const { WriteField<int>("beatTotal", value); }
        void* titlePlace() const { return ReadField<void*>("titlePlace"); }
        void SetTitlePlace(void* value) const { WriteField<void*>("titlePlace", value); }
        float salience() const { return ReadField<float>("salience"); }
        void SetSalience(float value) const { WriteField<float>("salience", value); }
        bool open() const { return ReadField<bool>("open"); }
        void SetOpen(bool value) const { WriteField<bool>("open", value); }
        void* cast() const { return ReadField<void*>("cast"); }
        void SetCast(void* value) const { WriteField<void*>("cast", value); }
        void* members() const { return ReadField<void*>("members"); }
        void SetMembers(void* value) const { WriteField<void*>("members", value); }
        void* beats() const { return ReadField<void*>("beats"); }
        void SetBeats(void* value) const { WriteField<void*>("beats", value); }
    };
}
