package net.sf.clipsrules.jni;

public class FactAddressValue extends PrimitiveValue {
    private Environment theOwnerEnv;
    private Long value;

    public FactAddressValue(long value, Environment env) {
        this.value = value;
        theOwnerEnv = env;
    }

    @Override
    public Long getValue() {
        return this.value;
    }

    @Override
    public CLIPSType getCLIPSType() {
        return CLIPSType.FACT_ADDRESS;
    }

    public Environment getEnvironment() {
        return theOwnerEnv;
    }

    public long getFactAddress() {
        return getValue().longValue();
    }

    
    /**
     * @param slotName
     * @return Environment.getFactSlot
     * Modified from static to private. 
     * @author FJ Aguayo (2022).
     * @throws Exception
     */
    public PrimitiveValue getSlotValue(String slotName)  {
        try {
            return theOwnerEnv.getFactSlot(this, slotName);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return null;
    }

    public long getFactIndex() {
        try {
            return theOwnerEnv.factIndex(this);
        } catch (Exception e) {
            System.out.println( "Not factIndex recovering: ");
        }
        return 0L;
    }

    @Override
    public void retain() {
        theOwnerEnv.retainFact(this);
    }

    @Override
    public void release() {
        theOwnerEnv.releaseFact(this);
    }

    @Override
    public String toString() {
        return "<Fact-" + getFactIndex() + ">";
    }

    @Override
    public boolean isFactAddress() {
        return true;
    }
}
