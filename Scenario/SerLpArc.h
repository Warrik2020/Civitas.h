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
        void id(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int titleForm() const { return ReadField<int>("titleForm"); }
        void titleForm(int value) const { WriteField<int>("titleForm", value); }
        int titleOrdinal() const { return ReadField<int>("titleOrdinal"); }
        void titleOrdinal(int value) const { WriteField<int>("titleOrdinal", value); }
        int subject() const { return ReadField<int>("subject"); }
        void subject(int value) const { WriteField<int>("subject", value); }
        int other() const { return ReadField<int>("other"); }
        void other(int value) const { WriteField<int>("other", value); }
        int record() const { return ReadField<int>("record"); }
        void record(int value) const { WriteField<int>("record", value); }
        int opened() const { return ReadField<int>("opened"); }
        void opened(int value) const { WriteField<int>("opened", value); }
        int closed() const { return ReadField<int>("closed"); }
        void closed(int value) const { WriteField<int>("closed", value); }
        int lastBeat() const { return ReadField<int>("lastBeat"); }
        void lastBeat(int value) const { WriteField<int>("lastBeat", value); }
        int anchor() const { return ReadField<int>("anchor"); }
        void anchor(int value) const { WriteField<int>("anchor", value); }
        int beatTotal() const { return ReadField<int>("beatTotal"); }
        void beatTotal(int value) const { WriteField<int>("beatTotal", value); }
        void* titlePlace() const { return ReadField<void*>("titlePlace"); }
        void titlePlace(void* value) const { WriteField<void*>("titlePlace", value); }
        float salience() const { return ReadField<float>("salience"); }
        void salience(float value) const { WriteField<float>("salience", value); }
        bool open() const { return ReadField<bool>("open"); }
        void open(bool value) const { WriteField<bool>("open", value); }
        void* cast() const { return ReadField<void*>("cast"); }
        void cast(void* value) const { WriteField<void*>("cast", value); }
        void* members() const { return ReadField<void*>("members"); }
        void members(void* value) const { WriteField<void*>("members", value); }
        void* beats() const { return ReadField<void*>("beats"); }
        void beats(void* value) const { WriteField<void*>("beats", value); }
    };
}
