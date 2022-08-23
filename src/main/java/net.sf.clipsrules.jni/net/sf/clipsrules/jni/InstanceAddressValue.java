package net.sf.clipsrules.jni;

public class InstanceAddressValue extends PrimitiveValue {
    private Environment theOwnerEnvironment;
    private Long value;

    public InstanceAddressValue(long value, Environment env) {
        this.value = value;
        theOwnerEnvironment = env;
    }

    @Override
    public Long getValue() {
        return this.value;
    }

    @Override
    public CLIPSType getCLIPSType() {
        return CLIPSType.INSTANCE_ADDRESS;
    }

    public Environment getEnvironment() {
        return theOwnerEnvironment;
    }

    public long getInstanceAddress() {
        return getValue().longValue();
    }

    public PrimitiveValue getSlotValue(String slotName) {
        return theOwnerEnvironment.directGetSlot(this, slotName);
    }

    public String getInstanceName() {
        return theOwnerEnvironment.getInstanceName(this);
    }

    @Override
    public String toString() {
        return "<Instance-" + getInstanceName() + ">";
    }

    @Override
    public void retain() {
        theOwnerEnvironment.retainInstance(this);
    }

    @Override
    public void release() {
        theOwnerEnvironment.releaseInstance(this);
    }

    @Override
    public boolean isInstanceAddress() {
        return true;
    }

}
